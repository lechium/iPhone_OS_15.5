//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AACNContactsManager-Protocol.h>

@class NSString;

@interface AAContactsManager : NSObject <AACNContactsManager>
{
}

- (id)_predicateForHandle:(id)arg1;	// IMP=0x000000000002687f
- (id)contactForHandle:(id)arg1;	// IMP=0x0000000000026677
- (id)contactIDForHandle:(id)arg1;	// IMP=0x000000000002649d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

