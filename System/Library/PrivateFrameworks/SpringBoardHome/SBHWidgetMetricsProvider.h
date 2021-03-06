//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBSWidgetMetricsProviding-Protocol.h>

@class NSString;
@protocol SBHWidgetMetricsProviderDelegate;

@interface SBHWidgetMetricsProvider : NSObject <SBSWidgetMetricsProviding>
{
    id <SBHWidgetMetricsProviderDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000051a75
@property(nonatomic) __weak id <SBHWidgetMetricsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x00000000000519ec
- (id)previewMetricsSpecificationForBundleIdentifier:(id)arg1;	// IMP=0x000000000005196e
- (id)systemMetricsForWidget:(id)arg1;	// IMP=0x000000000005193a
- (id)systemMetricsForFamily:(long long)arg1;	// IMP=0x00000000000516ad
- (id)systemDefaultMetricsSpecification;	// IMP=0x00000000000514bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

