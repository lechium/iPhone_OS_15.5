//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions, NAFuture, NSArray;

@interface HMBProcessingResult : HMFObject
{
    HMBProcessingOptions *_options;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
    NAFuture *_mirrorOutputResult;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000027e8
@property(readonly, nonatomic) NAFuture *mirrorOutputResult; // @synthesize mirrorOutputResult=_mirrorOutputResult;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) HMBProcessingOptions *options; // @synthesize options=_options;
- (id)initWithOptions:(id)arg1 actions:(id)arg2 mirrorOutputResult:(id)arg3;	// IMP=0x00000000000026ef

@end
