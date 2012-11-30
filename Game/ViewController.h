//
//  ViewController.h
//  Game
//
//  Created by Xingyin Zhu on 12-11-25.
//  Copyright (c) 2012年 Xingyin Zhu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIAlertViewDelegate>

-(IBAction)showAlert;
-(IBAction)startOver;
-(IBAction)showInfo;

-(IBAction)sliderMoved:(UISlider *)sender;

@property (nonatomic, strong) IBOutlet UISlider *slider;
@property (nonatomic, strong) IBOutlet UILabel *targetLabel;

@property (nonatomic, strong) IBOutlet UILabel *scoreLabel;
@property (nonatomic, strong) IBOutlet UILabel *roundLabel;


@end
