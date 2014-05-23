//
//  ViewController.h
//  SQLLite
//
//  Created by Kwame Bryan on 3/5/2014.
//  Copyright (c) 2014 Kwame Bryan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface ViewController : UIViewController

@property (strong,nonatomic) NSString *dataBasePath;
@property (nonatomic) sqlite3 *contactDB;
@property (strong, nonatomic) IBOutlet UITextField *name;
@property (strong, nonatomic) IBOutlet UITextField *address;
@property (strong, nonatomic) IBOutlet UITextField *phone;
@property (strong, nonatomic) IBOutlet UILabel *status;


- (IBAction)saveData:(id)sender;

- (IBAction)findContact:(id)sender;

@end
