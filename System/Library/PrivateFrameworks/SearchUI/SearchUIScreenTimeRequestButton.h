//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSObject;

@interface SearchUIScreenTimeRequestButton
{
    id <NSObject> _screentimeRequestStatusObserver;	// 8 = 0x8
}

+ (_Bool)supportsRowModel:(id)arg1;	// IMP=0x00000000000256fd
- (void).cxx_destruct;	// IMP=0x0000000000025d52
@property(retain, nonatomic) id <NSObject> screentimeRequestStatusObserver; // @synthesize screentimeRequestStatusObserver=_screentimeRequestStatusObserver;
- (unsigned long long)type;	// IMP=0x0000000000025d22
- (void)dealloc;	// IMP=0x0000000000025c71
- (void)setupSubscription;	// IMP=0x0000000000025aed
- (void)updateWithRowModel:(id)arg1;	// IMP=0x0000000000025943
- (int)getRequestState;	// IMP=0x00000000000258a7
- (id)requestIdentifier;	// IMP=0x000000000002580a

@end

