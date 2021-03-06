//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARHome, CARHomeKitService, HMCharacteristic, NSError, NSString, NSUUID;

@interface CARHomeKitCharacteristic : NSObject
{
    _Bool _current;	// 8 = 0x8
    id _value;	// 16 = 0x10
    id _formatedValue;	// 24 = 0x18
    CARHomeKitService *_service;	// 32 = 0x20
    HMCharacteristic *_characteristic;	// 40 = 0x28
    id _pendingWriteValue;	// 48 = 0x30
    id _pendingReadValue;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
}

+ (id)characteristicFormats;	// IMP=0x0020000000028046
+ (id)characteristicFormat;	// IMP=0x0010000000028039
+ (id)chacteristicWithService:(id)arg1 characteristic:(id)arg2;	// IMP=0x0010000000026f4f
+ (id)registeredCharacteristicClasses;	// IMP=0x0010000000026ee9
+ (void)registerCharacteristicClass:(Class)arg1;	// IMP=0x0010000000026d05
+ (void)load;	// IMP=0x0010000000026cb7
- (void).cxx_destruct;	// IMP=0x00200000000286fe
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id pendingReadValue; // @synthesize pendingReadValue=_pendingReadValue;
// Error: Property attributes should begin with the type ('T') attribute, property name: pendingWriteValue
// Property attributes: (null)

@property(retain, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly, nonatomic) __weak CARHomeKitService *service; // @synthesize service=_service;
@property(nonatomic) _Bool current; // @synthesize current=_current;
@property(retain, nonatomic) id formatedValue; // @synthesize formatedValue=_formatedValue;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) NSString *stateDescription;
- (id)statesDescription;	// IMP=0x0010000000028300
@property(readonly, nonatomic) _Bool usable;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (void)_updateValue;	// IMP=0x00100000000280d1
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) _Bool writeable;
@property(readonly, nonatomic) _Bool readable;
@property(readonly, nonatomic) _Bool notifies;
@property(readonly, nonatomic) NSString *format;
- (void)updateValue;	// IMP=0x0010000000027626
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool pendingRead;
@property(readonly, nonatomic) _Bool pendingWrite;
@property(readonly, nonatomic) CARHome *home;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)initWithService:(id)arg1 characteristic:(id)arg2;	// IMP=0x0010000000027133

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

