//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreContactPropertyValueFilter-Protocol.h>

@class NSString;

@interface CNUICoreContactNicknameValueFilter : NSObject <CNUICoreContactPropertyValueFilter>
{
}

@property(readonly, copy) NSString *description;
- (void)filterPropertyValuesFromContact:(id)arg1;	// IMP=0x000000000004e181
- (id)contactByFilteringOutPropertyValueOfContact:(id)arg1;	// IMP=0x000000000004e0e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

