//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CUIDSWriteRequest : NSObject
{
    const char *writeBase;	// 8 = 0x8
    const char *writePtr;	// 16 = 0x10
    const char *writeEnd;	// 24 = 0x18
    CUIDSWriteRequest *next;	// 32 = 0x20
    NSData *_data;	// 40 = 0x28
    CDUnknownBlockType _completion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000005a824
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

@end
