//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIWebClip;

@interface SearchUIWebClipIconImage
{
    UIWebClip *_webClip;	// 24 = 0x18
}

+ (id)convertImage:(id)arg1 ofSize:(struct CGSize)arg2 withShape:(unsigned long long)arg3 scale:(double)arg4;	// IMP=0x0000000000052ad2
- (void).cxx_destruct;	// IMP=0x0000000000052e94
@property(retain, nonatomic) UIWebClip *webClip; // @synthesize webClip=_webClip;
- (id)uniqueIdentifier;	// IMP=0x0000000000052e1f
- (unsigned long long)hash;	// IMP=0x0000000000052db1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000052cb7
- (id)generateImageWithFormat:(int)arg1 scale:(double)arg2;	// IMP=0x00000000000529e6
- (id)initWithWebClip:(id)arg1 variant:(unsigned long long)arg2;	// IMP=0x0000000000052949

@end
