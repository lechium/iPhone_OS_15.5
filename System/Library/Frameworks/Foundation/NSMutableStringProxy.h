//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSMutableStringProxy
{
}

- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;	// IMP=0x0000000000053d58
- (void)getCString:(char *)arg1;	// IMP=0x0000000000053cf0
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000000053c99
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 range:(struct _NSRange)arg3 remainingRange:(struct _NSRange *)arg4;	// IMP=0x0000000000053bf2
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000053baa
- (void)getCharacters:(unsigned short *)arg1;	// IMP=0x0000000000053b68

@end

