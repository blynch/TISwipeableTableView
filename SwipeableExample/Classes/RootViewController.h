//
//  RootViewController.h
//  SwipeableExample
//
//  Created by Tom Irving on 16/06/2010.
//  Copyright Tom Irving 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ExampleCell.h"
#import <AVFoundation/AVFoundation.h>

@interface RootViewController : UITableViewController <TISwipeableTableViewDelegate, AVAudioPlayerDelegate> {
	
	NSMutableArray * audioPlayers;
}

@property (nonatomic, retain) NSMutableArray * audioPlayers;

@end
