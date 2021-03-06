//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMFileContainer-Protocol.h>

@class NSString, NSURL;

@interface FMSharedFileContainer : NSObject <FMFileContainer>
{
    NSURL *_url;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000008710
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)groupContainerURLWithIdentifier:(id)arg1;	// IMP=0x00000000000085c6
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000000852e
- (id)init;	// IMP=0x000000000000851a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

