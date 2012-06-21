//
//  JLMasterViewController.h
//  TableReloadTest
//
//  Created by Jose Luis Piedrahita on 6/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JLDetailViewController;

@interface JLMasterViewController : UITableViewController

@property (strong, nonatomic) IBOutlet UITableViewCell *cell;
@property (strong, nonatomic) JLDetailViewController *detailViewController;

@end
