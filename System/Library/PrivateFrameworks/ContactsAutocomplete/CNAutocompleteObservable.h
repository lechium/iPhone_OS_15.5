//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/CNObservable.h>

@class NSString;

@interface CNAutocompleteObservable : CNObservable
{
    NSString *_debugDescription;	// 16 = 0x10
    CNObservable *_observable;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000026127
@property(retain, nonatomic) CNObservable *observable; // @synthesize observable=_observable;
@property(retain, nonatomic) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
- (id)subscribe:(id)arg1;	// IMP=0x000000000002605a
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025fd1

@end
