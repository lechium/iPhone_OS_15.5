//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSCoderData-Protocol.h>

@class NSData;

@interface CSCoder : NSObject <CSCoderData>
{
    _Bool _finalized;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    struct _MDPlistContainer *_container;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000021d04
@property(readonly, nonatomic) _Bool finalized; // @synthesize finalized=_finalized;
@property(readonly, nonatomic) struct _MDPlistContainer *container; // @synthesize container=_container;
- (void)endDictionary;	// IMP=0x0000000000021ce1
- (void)beginDictionary;	// IMP=0x0000000000021cd3
- (void)endType;	// IMP=0x0000000000021cc3
- (void)beginType:(const char *)arg1;	// IMP=0x0000000000021c37
- (void)endArray;	// IMP=0x0000000000021c27
- (void)beginArray;	// IMP=0x0000000000021c19
- (void)encodeNSString:(id)arg1;	// IMP=0x0000000000021bf0
- (void)encodeObject:(id)arg1;	// IMP=0x0000000000021b8f
- (void)encodeMDPlistObject:(CDStruct_b7fac349)arg1;	// IMP=0x0000000000021ab5
- (void)encodeString:(const char *)arg1 stringLength:(long long)arg2 forKey:(const char *)arg3 keyLength:(long long)arg4;	// IMP=0x0000000000021a6b
- (void)encodeObject:(id)arg1 forKey:(const char *)arg2 keyLength:(long long)arg3;	// IMP=0x0000000000021a0a
- (void)encodeObject:(id)arg1 withKey:(id)arg2;	// IMP=0x0000000000021999
- (void)encodeData:(const void *)arg1 length:(long long)arg2;	// IMP=0x0000000000021983
- (void)encodeString:(const char *)arg1 length:(long long)arg2;	// IMP=0x0000000000021962
- (void)encodeString:(const char *)arg1;	// IMP=0x000000000002193d
- (void)encodeDouble:(double)arg1;	// IMP=0x000000000002192d
- (void)encodeInt64:(long long)arg1;	// IMP=0x000000000002191a
- (void)encodeInt32:(int)arg1;	// IMP=0x0000000000021908
- (void)encodeBool:(_Bool)arg1;	// IMP=0x00000000000218f6
- (void)dealloc;	// IMP=0x00000000000218a8
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (const struct _MDPlistContainer *)plistContainer;	// IMP=0x00000000000217f5
- (id)init;	// IMP=0x0000000000021788

@end

