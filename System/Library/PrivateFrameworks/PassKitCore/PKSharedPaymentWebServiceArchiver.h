//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceArchiver-Protocol.h>

@class NSString;

@interface PKSharedPaymentWebServiceArchiver : NSObject <PKPaymentWebServiceArchiver>
{
}

+ (id)sharedPaymentWebServiceArchiver;	// IMP=0x00000000002cae50
- (void)archiveBackgroundContext:(id)arg1;	// IMP=0x00000000002caec4
- (void)archiveContext:(id)arg1;	// IMP=0x00000000002cae6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

