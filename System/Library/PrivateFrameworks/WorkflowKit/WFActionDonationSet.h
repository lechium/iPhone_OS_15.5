//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WFActionDonationSet : NSObject
{
    NSMutableArray *_predictedActions;	// 8 = 0x8
    NSMutableArray *_recentActions;	// 16 = 0x10
    NSMutableArray *_appSuggestedActions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000114216
@property(readonly, nonatomic) NSMutableArray *appSuggestedActions; // @synthesize appSuggestedActions=_appSuggestedActions;
@property(readonly, nonatomic) NSMutableArray *recentActions; // @synthesize recentActions=_recentActions;
@property(readonly, nonatomic) NSMutableArray *predictedActions; // @synthesize predictedActions=_predictedActions;
- (id)init;	// IMP=0x000000000011415a

@end

