//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ARKit/ARTrackable-Protocol.h>

@class NSString, NSURL;

@interface ARAppClipCodeAnchor <ARTrackable>
{
    _Bool isTracked;	// 8 = 0x8
    float _radius;	// 12 = 0xc
    NSURL *_url;	// 16 = 0x10
    long long _urlDecodingState;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001ccf
- (void).cxx_destruct;	// IMP=0x0000000000001d2f
@property(readonly, nonatomic) float radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) long long urlDecodingState; // @synthesize urlDecodingState=_urlDecodingState;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool isTracked; // @synthesize isTracked;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001cdd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001cd7
- (id)initWithAnchor:(id)arg1;	// IMP=0x0000000000001cc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
