//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MFQuotedPrintableDecoder
{
    unsigned char _lastEncoded;	// 17 = 0x11
    unsigned long long _required;	// 24 = 0x18
    _Bool _forTextPart;	// 32 = 0x20
    _Bool _badlyEncoded;	// 33 = 0x21
}

@property(nonatomic) _Bool forTextPart; // @synthesize forTextPart=_forTextPart;
- (void)done;	// IMP=0x0000000000038def
- (long long)appendData:(id)arg1;	// IMP=0x0000000000038915

@end
