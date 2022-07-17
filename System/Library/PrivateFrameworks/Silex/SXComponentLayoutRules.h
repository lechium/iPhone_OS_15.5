//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>

@interface SXComponentLayoutRules : NSObject <NSCopying>
{
    _Bool _allowsIntersection;	// 8 = 0x8
    _Bool _shouldSpanAllColumns;	// 9 = 0x9
    _Bool _allowsSiblingBasedResizing;	// 10 = 0xa
    _Bool _shouldIgnoreDocumentMargin;	// 11 = 0xb
    unsigned long long _minimumColumnSpan;	// 16 = 0x10
}

+ (id)bodyComponentLayoutRules;	// IMP=0x000000000013c479
+ (id)twoColumnLayoutRules;	// IMP=0x000000000013c3ec
+ (id)fullWidthLayoutRules;	// IMP=0x000000000013c34a
+ (id)defaultLayoutRules;	// IMP=0x000000000013c2f5
@property(nonatomic) _Bool shouldIgnoreDocumentMargin; // @synthesize shouldIgnoreDocumentMargin=_shouldIgnoreDocumentMargin;
@property(nonatomic) _Bool allowsSiblingBasedResizing; // @synthesize allowsSiblingBasedResizing=_allowsSiblingBasedResizing;
@property(nonatomic) _Bool shouldSpanAllColumns; // @synthesize shouldSpanAllColumns=_shouldSpanAllColumns;
@property(nonatomic) _Bool allowsIntersection; // @synthesize allowsIntersection=_allowsIntersection;
@property(nonatomic) unsigned long long minimumColumnSpan; // @synthesize minimumColumnSpan=_minimumColumnSpan;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000068026
- (id)init;	// IMP=0x0000000000067fe3

@end
