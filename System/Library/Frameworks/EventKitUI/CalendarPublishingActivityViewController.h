//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityViewController.h>

@protocol CalendarPublishingActivityDelegate;

@interface CalendarPublishingActivityViewController : UIActivityViewController
{
    id <CalendarPublishingActivityDelegate> _activityDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000196765
@property __weak id <CalendarPublishingActivityDelegate> activityDelegate; // @synthesize activityDelegate=_activityDelegate;
- (void)_prepareActivity:(id)arg1;	// IMP=0x0000000000196382
- (_Bool)_shouldShowSystemActivityType:(id)arg1;	// IMP=0x0000000000196316

@end
