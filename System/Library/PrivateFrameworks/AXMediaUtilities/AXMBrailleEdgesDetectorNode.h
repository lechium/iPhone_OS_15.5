//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXMBrailleEdgesDetectorNode
{
}

+ (id)title;	// IMP=0x0000000000081592
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008158a
+ (_Bool)isSupported;	// IMP=0x0000000000081582
- (id)_processImage:(id)arg1 analaysisOptions:(id)arg2;	// IMP=0x0000000000081e83
- (void)evaluate:(id)arg1 metrics:(id)arg2;	// IMP=0x0000000000081c88
- (unsigned char)_mapLuminance:(double)arg1 toDiscreteNumber:(unsigned long long)arg2 invert:(_Bool)arg3;	// IMP=0x0000000000081ba7
- (id)_generateResultFromImage:(id)arg1 canvasDescription:(id)arg2 invert:(_Bool)arg3;	// IMP=0x000000000008159f

@end
