//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SNProcessVoiceTriggerModelOutput : NSObject
{
    NSArray *_commandFilters;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005e017
@property(readonly, nonatomic) NSArray *commandFilters; // @synthesize commandFilters=_commandFilters;
- (id)processNewResults:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;	// IMP=0x000000000005dd28
- (id)initWithCommands:(id)arg1;	// IMP=0x000000000005dade

@end
