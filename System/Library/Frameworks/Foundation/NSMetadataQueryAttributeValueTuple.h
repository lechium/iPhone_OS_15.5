//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject
{
    id _attr;	// 8 = 0x8
    id _value;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    void *_reserved;	// 32 = 0x20
}

@property(readonly) unsigned long long count;
@property(readonly, retain) id value;
@property(readonly, copy) NSString *attribute;
- (void)dealloc;	// IMP=0x00000000000d4208
- (id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4;	// IMP=0x00000000000d41c9

@end

