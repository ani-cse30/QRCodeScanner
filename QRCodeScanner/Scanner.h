//
//  ViewController.h
//  QRCodeScanner
//
//  Created by Anindya Das on 10/1/17.
//  Copyright © 2017 AppsInception. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Scanner : UIViewController

@property (strong, nonatomic) IBOutlet UIView *viewPreview;
@property (strong, nonatomic) IBOutlet UIImageView *previewFrame;

- (IBAction)FlashLightAction:(id)sender;
- (IBAction)cameraSwitchAction:(id)sender;
@end

