//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TLSMessage : NSObject
{
}

- (_Bool)encodeExtensions:(id)arg1 buffer:(id)arg2;	// IMP=0x00000000000afcb2
- (_Bool)encodeHashValue:(id)arg1 buffer:(id)arg2;	// IMP=0x00000000000afc92
- (_Bool)encodeVRFOutput:(id)arg1 buffer:(id)arg2;	// IMP=0x00000000000afc72
- (_Bool)encodeByteArray:(id)arg1 minLength:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 buffer:(id)arg4;	// IMP=0x00000000000afb45
- (_Bool)encodeUint64:(unsigned long long)arg1 buffer:(id)arg2;	// IMP=0x00000000000afaae
- (_Bool)encodeByte:(unsigned char)arg1 buffer:(id)arg2;	// IMP=0x00000000000afa3e
- (_Bool)encodeBool:(_Bool)arg1 buffer:(id)arg2;	// IMP=0x00000000000af9bd
- (const char *)parseExtensions:(const char *)arg1 end:(const char *)arg2 result:(id *)arg3;	// IMP=0x00000000000af774
- (const char *)parseHashValue:(const char *)arg1 end:(const char *)arg2 result:(id *)arg3;	// IMP=0x00000000000af749
- (const char *)parseVRFOutput:(const char *)arg1 end:(const char *)arg2 result:(id *)arg3;	// IMP=0x00000000000af71e
- (const char *)parseByteArray:(const char *)arg1 end:(const char *)arg2 minLength:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 result:(id *)arg5;	// IMP=0x00000000000af609
- (const char *)parseUint64:(const char *)arg1 end:(const char *)arg2 result:(unsigned long long *)arg3;	// IMP=0x00000000000af551
- (const char *)parseByte:(const char *)arg1 end:(const char *)arg2 result:(char *)arg3;	// IMP=0x00000000000af528
- (const char *)parseBool:(const char *)arg1 end:(const char *)arg2 result:(_Bool *)arg3;	// IMP=0x00000000000af4f0

@end

