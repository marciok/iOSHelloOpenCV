//
//  MKKViewController.h
//  HelloOpenCViOS
//
//  Created by Marcio Klepacz on 5/25/14.
//  Copyright (c) 2014 Marcio Klepacz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <opencv2/highgui/cap_ios.h>

@interface MKKViewController : UIViewController <CvVideoCameraDelegate>

@property (nonatomic, strong) IBOutlet UIImageView *imageView;
@property (nonatomic, strong) IBOutlet UIButton *startButton;

- (IBAction)actionStart:(id)sender;

@end
