//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface STStorageActionTipItem : NSObject
{
    _Bool _recoverable;	// 8 = 0x8
    long long _size;	// 16 = 0x10
    NSDate *_lastUsedDate;	// 24 = 0x18
    NSDate *_createdDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000008903
@property(retain) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(retain) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(getter=isRecoverable) _Bool recoverable; // @synthesize recoverable=_recoverable;
@property long long size; // @synthesize size=_size;

@end
