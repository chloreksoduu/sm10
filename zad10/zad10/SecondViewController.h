//
//  SecondViewController.h
//  sm10
//
//  Created by Patrycja Zadziłko on 18/12/2023.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SecondViewController : UIViewController <CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    CLGeocoder *geocoder;
    CLPlacemark *placemark;
}

@property(weak, nonatomic) IBOutlet UILabel *latitudeLabel;
@property(weak, nonatomic) IBOutlet UILabel *longtitudeLabel;
@property(weak, nonatomic) IBOutlet UILabel *adressLabel;

@property(weak, nonatomic) IBOutlet UITextField *latitudeText;
@property(weak, nonatomic) IBOutlet UITextField *longtitudeText;
@property(weak, nonatomic) IBOutlet UILabel *adrText;

@property(weak, nonatomic) IBOutlet UIButton *currentLocationButton;

-(IBAction)getCurrentLocation:(id)sender;

@end

NS_ASSUME_NONNULL_END

