//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ACDEventLedger : NSObject
{
    char *_crashInfoString;	// 8 = 0x8
    NSMutableArray *_eventLedger;	// 16 = 0x10
}

+ (id)sharedLedger;	// IMP=0x00000000000649b2
- (void).cxx_destruct;	// IMP=0x0000000000064d91
@property(retain) NSMutableArray *eventLedger; // @synthesize eventLedger=_eventLedger;
- (void)simulateCrashWithMessage:(id)arg1;	// IMP=0x0000000000064d0c
- (id)historyDescription;	// IMP=0x0000000000064c7f
- (void)recordEvent:(id)arg1;	// IMP=0x0000000000064a72
- (id)init;	// IMP=0x0000000000064a07

@end
