//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableDictionary, NSString;

@interface MTUIRenderedHandViewFactory : NSObject
{
    NSBundle *_resourcesBundle;	// 8 = 0x8
    NSString *_imagePath;	// 16 = 0x10
    struct CGPoint _offset;	// 24 = 0x18
    struct CGSize _scale;	// 40 = 0x28
    struct CGPDFPage *_page;	// 56 = 0x38
    struct CGSize _viewSize;	// 64 = 0x40
    _Bool _allowCaching;	// 80 = 0x50
    NSMutableDictionary *_angleCache;	// 88 = 0x58
    unsigned long long _registeredClientsCount;	// 96 = 0x60
}

+ (void)flushAllCaches;	// IMP=0x000000000000429f
+ (void)unregisterForFactory:(id)arg1;	// IMP=0x000000000000417e
+ (id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4 allowCaching:(_Bool)arg5;	// IMP=0x0000000000003f71
+ (id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4;	// IMP=0x0000000000003dd3
- (void).cxx_destruct;	// IMP=0x000000000000483b
@property(nonatomic) unsigned long long registeredClientsCount; // @synthesize registeredClientsCount=_registeredClientsCount;
@property(readonly, nonatomic) _Bool allowCaching; // @synthesize allowCaching=_allowCaching;
- (void)flushCache;	// IMP=0x0000000000004808
- (id)imageForAngle:(double)arg1 viewSize:(struct CGSize)arg2;	// IMP=0x0000000000004684
- (id)renderImageForAngle:(double)arg1 viewSize:(struct CGSize)arg2;	// IMP=0x0000000000004517
@property(readonly, nonatomic) NSString *key;
- (void)dealloc;	// IMP=0x00000000000044a1
- (id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4 allowCaching:(_Bool)arg5;	// IMP=0x00000000000042ea

@end
