//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface NSDebugString
{
    NSString *string;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x00000000000179cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000179c4
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000179a7
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001798a
- (unsigned long long)length;	// IMP=0x000000000001796d
- (id)initWithString:(id)arg1;	// IMP=0x00000000000178d9

@end

