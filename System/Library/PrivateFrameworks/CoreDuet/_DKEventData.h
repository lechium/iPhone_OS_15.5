//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface _DKEventData : NSObject
{
    unsigned long long _version;	// 8 = 0x8
    NSData *_event;	// 16 = 0x10
    unsigned long long _uncompressedLength;	// 24 = 0x18
}

+ (id)fromPBCodable:(id)arg1;	// IMP=0x00000000000c0b2e
- (void).cxx_destruct;	// IMP=0x0000000000113e4a
- (id)toPBCodable;	// IMP=0x00000000000c0a65

@end

