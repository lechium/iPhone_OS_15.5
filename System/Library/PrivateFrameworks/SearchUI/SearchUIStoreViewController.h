//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKit/SKStoreProductViewController.h>

#import <SearchUI/SKStoreProductViewControllerDelegate-Protocol.h>

@class NSString;
@protocol SFFeedbackListener;

@interface SearchUIStoreViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate>
{
    id <SFFeedbackListener> _feedbackListener;	// 8 = 0x8
    unsigned long long _queryId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005a9b5
@property unsigned long long queryId; // @synthesize queryId=_queryId;
@property __weak id <SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x000000000005a7fc
- (id)initWithIdentifier:(id)arg1 feedbackListener:(id)arg2 queryId:(unsigned long long)arg3;	// IMP=0x000000000005a6ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

