//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIImageLoadParams-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaEntityImageLoadParams : NSObject <VUIImageLoadParams>
{
    NSString *_imageIdentifier;	// 8 = 0x8
    NSURL *_imageURL;	// 16 = 0x10
    NSString *_baseImageIdentifier;	// 24 = 0x18
    unsigned long long _imageType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000278e1c
@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(copy, nonatomic) NSString *baseImageIdentifier; // @synthesize baseImageIdentifier=_baseImageIdentifier;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027897b
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
- (id)init;	// IMP=0x00000000002787a1
- (id)initWithImageURL:(id)arg1 baseImageIdentifier:(id)arg2 imageType:(unsigned long long)arg3;	// IMP=0x000000000027867c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

