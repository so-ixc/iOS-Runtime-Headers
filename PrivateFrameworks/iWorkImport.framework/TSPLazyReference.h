/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPLazyReference : NSObject <NSCopying> {
    TSPComponent *_component;
    <TSPLazyReferenceDelegate> *_delegate;
    struct { 
        unsigned int isWeak : 1; 
        unsigned int isExternal : 1; 
        unsigned int allowUnknownObject : 1; 
    } _flags;
    long long _identifier;
    TSPObject *_strongObject;
    TSPObject *_weakObject;
}

@property (nonatomic) TSPComponent *component;
@property (nonatomic) <TSPLazyReferenceDelegate> *delegate;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic) BOOL isExternal;
@property (nonatomic, readonly) BOOL isWeak;
@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) id objectIfLoaded;
@property (nonatomic, readonly) NSUUID *objectUUID;
@property (nonatomic, retain) TSPObject *strongObject;
@property (nonatomic, readonly) TSPObject *weakObject;

+ (id)referenceForObject:(id)arg1;
+ (id)weakReferenceForObject:(id)arg1;

- (void).cxx_destruct;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2;
- (id)component;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)delegate;
- (BOOL)discardStrongObjectIfPossible;
- (unsigned int)hash;
- (long long)identifier;
- (id)init;
- (id)initWeakReferenceWithObject:(id)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 isWeak:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLazyReference:(id)arg1;
- (BOOL)isExternal;
- (BOOL)isWeak;
- (id)object;
- (id)objectIfLoaded;
- (id)objectUUID;
- (BOOL)referencesObject:(id)arg1;
- (void)resetIdentifierFromCopy:(BOOL)arg1;
- (void)resetToIdentifier:(long long)arg1;
- (void)setComponent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsExternal:(BOOL)arg1;
- (void)setStrongObject:(id)arg1;
- (id)strongObject;
- (id)weakObject;

@end
