//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIIDSHandleAvailability-Protocol.h>

@class NSString;
@protocol CNUIIDSHandle;

@interface _CNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability>
{
    _Bool _available;	// 8 = 0x8
    id <CNUIIDSHandle> _handle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000330c
@property(readonly, nonatomic) _Bool isAvailable; // @dynamic isAvailable;
@property(readonly, nonatomic) id <CNUIIDSHandle> handle; // @synthesize handle=_handle;
@property(readonly, copy) NSString *description;
- (id)initWithHandle:(id)arg1 available:(_Bool)arg2;	// IMP=0x0000000000003173

// Remaining properties
@property(readonly, nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

