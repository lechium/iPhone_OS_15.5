//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _BKSHIDEventAuthenticationKey;

@interface BKSHIDEventAuthenticationOriginator : NSObject
{
    _BKSHIDEventAuthenticationKey *_key;	// 8 = 0x8
    double _keyLastAccessTime;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003da11
- (long long)validateMessage:(id)arg1;	// IMP=0x000000000003d3e1
- (id)buildMessage:(CDUnknownBlockType)arg1;	// IMP=0x000000000003cde3

@end

