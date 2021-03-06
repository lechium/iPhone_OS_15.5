//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpriteKit/SKView.h>

#import <ARKit/ARSessionProviding-Protocol.h>

@class ARSession, NSObject, NSString;
@protocol ARSKViewDelegate;

@interface ARSKView : SKView <ARSessionProviding>
{
    ARSession *_session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003818
@property(retain, nonatomic) ARSession *session; // @synthesize session=_session;
- (id)nodeForAnchor:(id)arg1;	// IMP=0x00000000000037eb
- (id)anchorForNode:(id)arg1;	// IMP=0x00000000000037e3
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;	// IMP=0x00000000000037d6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000003796
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003767

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak NSObject<ARSKViewDelegate> *delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

