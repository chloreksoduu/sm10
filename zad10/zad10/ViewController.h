//
//  ViewController.h
//  zad10
//
//  Created by Patrycja Zadziłko on 18/12/2023.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet UILabel *gestureLabel;

- (IBAction) tapGesture: (UITapGestureRecognizer *) sender;
- (IBAction) pinchGesture:(UIPinchGestureRecognizer *) sender;
- (IBAction) swipeGesture: (UISwipeGestureRecognizer *) sender;
- (IBAction) longPressGesture: (UILongPressGestureRecognizer *) sender;


@end

