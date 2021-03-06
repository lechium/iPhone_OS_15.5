//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MPGaplessInfo : NSObject
{
    unsigned int _encodingDelayInFrames;	// 8 = 0x8
    unsigned int _encodingDrainInFrames;	// 12 = 0xc
    unsigned int _heuristicInfo;	// 16 = 0x10
    unsigned long long _durationInFrames;	// 24 = 0x18
    unsigned long long _lastPacketsResync;	// 32 = 0x20
}

@property(nonatomic) unsigned long long lastPacketsResync; // @synthesize lastPacketsResync=_lastPacketsResync;
@property(nonatomic) unsigned int heuristicInfo; // @synthesize heuristicInfo=_heuristicInfo;
@property(nonatomic) unsigned int encodingDrainInFrames; // @synthesize encodingDrainInFrames=_encodingDrainInFrames;
@property(nonatomic) unsigned int encodingDelayInFrames; // @synthesize encodingDelayInFrames=_encodingDelayInFrames;
@property(nonatomic) unsigned long long durationInFrames; // @synthesize durationInFrames=_durationInFrames;

@end

