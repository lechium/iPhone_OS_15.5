//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXAutoPlacementLayout-Protocol.h>

@class NSString;
@protocol SXEdgeSpacing;

@interface SXDebugAdLayout : NSObject <SXAutoPlacementLayout>
{
    id <SXEdgeSpacing> _margin;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003cd36
@property(readonly, nonatomic) id <SXEdgeSpacing> margin; // @synthesize margin=_margin;
- (id)initWithMargin:(struct _SXConvertibleValue)arg1;	// IMP=0x000000000003ccac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

