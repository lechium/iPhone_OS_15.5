//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>

@class NSString;

@interface SSUIServiceRequest : NSObject <BSXPCCoding>
{
}

+ (id)entitlement;	// IMP=0x0000000000005bab
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000005be9
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000005be3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

