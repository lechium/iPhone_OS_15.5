//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookRenderer-Protocol.h>

@class NSString;
@protocol SXQuickLookStyler;

@interface SXQuickLookRenderer : NSObject <SXQuickLookRenderer>
{
    id <SXQuickLookStyler> _styler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000159c5c
@property(readonly, nonatomic) id <SXQuickLookStyler> styler; // @synthesize styler=_styler;
- (void)renderErrorMessage:(id)arg1 view:(id)arg2;	// IMP=0x0000000000159c3d
- (void)renderThumbnailImage:(id)arg1 view:(id)arg2;	// IMP=0x0000000000159be4
- (void)render:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000000159a21
- (id)initWithStyler:(id)arg1;	// IMP=0x00000000001599b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

