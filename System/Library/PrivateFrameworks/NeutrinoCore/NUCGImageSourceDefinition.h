//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUCGImageSourceDefinition
{
    struct CGImageSource *_imageSource;	// 16 = 0x10
}

@property(readonly) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
- (long long)mediaType;	// IMP=0x0000000000098199
- (void)dealloc;	// IMP=0x0000000000098158
- (id)initWithCGImageSource:(struct CGImageSource *)arg1;	// IMP=0x0000000000097dd5
- (id)init;	// IMP=0x0000000000097a62
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000094feb

@end
