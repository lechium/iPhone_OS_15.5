//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBarButtonItem, UIView;

@interface WFAlertPresentationSource : NSObject
{
    _Bool _canOverlapSourceViewRect;	// 8 = 0x8
    UIView *_sourceView;	// 16 = 0x10
    UIBarButtonItem *_barButtonItem;	// 24 = 0x18
    unsigned long long _permittedArrowDirections;	// 32 = 0x20
    struct CGRect _sourceRect;	// 40 = 0x28
}

+ (id)sourceWithBarButtonItem:(id)arg1;	// IMP=0x00000000000a42c9
+ (id)sourceWithView:(id)arg1 rect:(struct CGRect)arg2;	// IMP=0x00000000000a4265
+ (id)sourceWithView:(id)arg1;	// IMP=0x00000000000a41ca
- (void).cxx_destruct;	// IMP=0x00000000000a41a2
@property(nonatomic) _Bool canOverlapSourceViewRect; // @synthesize canOverlapSourceViewRect=_canOverlapSourceViewRect;
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (id)initWithSourceView:(id)arg1 sourceRect:(struct CGRect)arg2 barButtonItem:(id)arg3;	// IMP=0x00000000000a4089
- (id)init;	// IMP=0x00000000000a4053

@end

