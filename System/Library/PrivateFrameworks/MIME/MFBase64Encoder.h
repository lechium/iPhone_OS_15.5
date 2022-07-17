//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MFBase64Encoder
{
    const char *_table;	// 24 = 0x18
    unsigned long long _left;	// 32 = 0x20
    unsigned char _leftovers[3];	// 40 = 0x28
    unsigned long long _line;	// 48 = 0x30
    unsigned long long _lineBreak;	// 56 = 0x38
    BOOL _padChar;	// 64 = 0x40
}

@property(nonatomic) BOOL padChar; // @synthesize padChar=_padChar;
@property(nonatomic) unsigned long long lineBreak; // @synthesize lineBreak=_lineBreak;
- (void)setStandardLineBreak;	// IMP=0x0000000000001a32
@property(nonatomic) _Bool allowSlash;
- (void)done;	// IMP=0x000000000000171c
- (long long)appendData:(id)arg1;	// IMP=0x0000000000001225
- (id)initWithConsumers:(id)arg1;	// IMP=0x00000000000011d4

@end
