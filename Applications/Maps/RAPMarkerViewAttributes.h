//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOFeatureStyleAttributes, NSString;

__attribute__((visibility("hidden")))
@interface RAPMarkerViewAttributes : NSObject
{
    NSString *_title;	// 8 = 0x8
    GEOFeatureStyleAttributes *_styleAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000969391
@property(readonly, copy, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000009692f3
- (id)initWithTitle:(id)arg1 styleAttributes:(id)arg2;	// IMP=0x001000000096923a

@end

