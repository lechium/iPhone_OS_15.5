//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@protocol SearchUIFeedbackDelegate;

@interface SearchUIUserReportRequestViewController : UIAlertController
{
    id <SearchUIFeedbackDelegate> _feedbackDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bb6ee
@property(retain) id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000bb6bf
- (void)sendFeedbackForResult:(id)arg1 cardSection:(id)arg2 selectedPunchout:(id)arg3;	// IMP=0x00000000000bb5aa
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000bb4f7
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 userReportRequest:(id)arg3 feedbackDelegate:(id)arg4 sourceView:(id)arg5;	// IMP=0x00000000000bae5e
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 feedbackDelegate:(id)arg3 sourceView:(id)arg4;	// IMP=0x00000000000bad8d

@end

