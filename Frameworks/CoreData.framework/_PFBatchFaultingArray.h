/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class _PFArray, NSFetchRequest, NSManagedObjectContext;

@interface _PFBatchFaultingArray : NSArray {
    struct _PFBatchFaultingArrayFlags { 
        unsigned int _LRUIndex : 8; 
        unsigned int _uniformEntity : 1; 
        unsigned int _RESERVED : 23; 
    unsigned int *_LRUBatches;
    _PFArray *_array;
    unsigned int _batchSize;
    int _cd_rc;
    unsigned int _count;
    unsigned int *_entryFlags;
    } _flags;
    NSManagedObjectContext *_moc;
    NSFetchRequest *_request;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (id)_newSubArrayInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 asMutable:(BOOL)arg2;
- (id)arrayFromObjectIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)description;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)getObjects:(id*)arg1;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3;
- (BOOL)isEqualToArray:(id)arg1;
- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newArrayFromObjectIDs;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)release;
- (id)retain;
- (unsigned int)retainCount;
- (id)subarrayWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end