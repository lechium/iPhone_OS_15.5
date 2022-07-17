//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSIconResponse-Protocol.h>

@class NSString, UIColor, UIImage;

@interface WBSTouchIconResponse <WBSIconResponse>
{
    _Bool _generated;	// 8 = 0x8
    UIImage *_touchIcon;	// 16 = 0x10
    UIColor *_extractedBackgroundColor;	// 24 = 0x18
}

+ (id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(_Bool)arg3 extractedBackgroundColor:(id)arg4;	// IMP=0x00000000000af862
- (void).cxx_destruct;	// IMP=0x00000000000afa8a
@property(readonly, nonatomic, getter=isGenerated) _Bool generated; // @synthesize generated=_generated;
@property(readonly, nonatomic) UIColor *extractedBackgroundColor; // @synthesize extractedBackgroundColor=_extractedBackgroundColor;
@property(readonly, nonatomic) UIImage *touchIcon; // @synthesize touchIcon=_touchIcon;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 touchIcon:(id)arg2 generated:(_Bool)arg3 extractedBackgroundColor:(id)arg4;	// IMP=0x00000000000af909
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000af8fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
