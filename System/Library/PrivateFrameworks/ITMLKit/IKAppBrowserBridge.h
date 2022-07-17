//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKDOMFeature-Protocol.h>

@class IKAppContext, NSString;
@protocol IKAppBrowser;

@interface IKAppBrowserBridge : NSObject <IKDOMFeature>
{
    double _cornerRadius;	// 8 = 0x8
    double _interitemSpacing;	// 16 = 0x10
    IKAppContext *_appContext;	// 24 = 0x18
    NSString *_featureName;	// 32 = 0x20
    id <IKAppBrowser> _appBrowser;	// 40 = 0x28
    struct UIEdgeInsets _maskInset;	// 48 = 0x30
}

+ (id)makeFeatureJSObjectForFeature:(id)arg1;	// IMP=0x000000000001b237
- (void).cxx_destruct;	// IMP=0x000000000001b648
@property(nonatomic) __weak id <IKAppBrowser> appBrowser; // @synthesize appBrowser=_appBrowser;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(nonatomic) struct UIEdgeInsets maskInset; // @synthesize maskInset=_maskInset;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)present;	// IMP=0x000000000001b400
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;	// IMP=0x000000000001b30c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
