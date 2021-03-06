//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <RelevanceEngine/REContentEncodable-Protocol.h>
#import <RelevanceEngine/REDonatedActionIdentifierProviding-Protocol.h>

@interface NSString (ActionIdentifier) <REDonatedActionIdentifierProviding, REContentEncodable>
- (unsigned long long)re_actionIdentifierHashValue;	// IMP=0x00000000000d9588
@property(readonly, nonatomic) NSString *contentEncodedString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

