//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/UITextViewDelegate-Protocol.h>

@class GEOComposedAdvisoryItem, NSString, UIImageView, UIStackView;

__attribute__((visibility("hidden")))
@interface MKIncidentExtendedDetailCell <UITextViewDelegate>
{
    UIStackView *_stackView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    GEOComposedAdvisoryItem *_advisoryItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b711b
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00000000000b70ad
- (void)_setConstraints;	// IMP=0x00000000000b6baa
- (id)aggregatedDetailsFor:(id)arg1;	// IMP=0x00000000000b69ce
- (id)customBodyTextView;	// IMP=0x00000000000b675a
- (void)configureWithAdvisoryItem:(id)arg1;	// IMP=0x00000000000b5b52
- (void)configureWithGEOAdvisoryCard:(id)arg1;	// IMP=0x00000000000b5787
- (void)configureWithGEORouteIncident:(id)arg1;	// IMP=0x00000000000b5104
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000000b4e89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

